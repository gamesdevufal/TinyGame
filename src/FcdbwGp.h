#ifndef FcdbwGp_H_
#define FcdbwGp_H_

#include "gameplay.h"

using namespace gameplay;

/*
 * Main game class.
 */
class FcdbwGp : public Game {
    public:

        /**
         * Constructor.
         */
        FcdbwGp();

        /**
         * @see Game::keyEvent
         */
        void keyEvent(Keyboard::KeyEvent evt, int key);
        /**
         * @see Game::touchEvent
         */
        bool mouseEvent(Mouse::MouseEvent evt, int x, int y, int wheelDelta);
#ifdef ANDROID
        void gestureSwipeEvent(int x, int y, int direction);
#endif

    protected:

        /**
         * @see Game::initialize
         */
        void initialize();

        /**
         * @see Game::finalize
         */
        void finalize();

        /**
         * @see Game::update
         */
        void update(float elapsedTime);

        /**
         * @see Game::render
         */
        void render(float elapsedTime);

    private:

        /**
         * Draws the scene each frame.
         */
        bool drawScene(Node* node);

        Scene* _scene;
        Node *cameraNode;
        Node *head;
        bool _wireframe;
        int moveFlag;
        AudioSource *_backgroundMusic{nullptr};

        bool drawable{false};
        Form *ui;
        float headStep;
};

#endif

