#include "../core/GlutProgram.h"
#include "../core/Model.h"

class InitialState : public ProgramState
{
    public:
        void Initialize(GlutProgram* program);
        void Finalize();

        void Pause();
        void Resume();

        void Mouse(int button, int state, int xPos, int yPos);
        void Keyboard(unsigned char key, int xPos, int yPos);
        void Reshape(int newWidth, int newHeight);
        void Render();
        void Update();

        static InitialState* GetInstance();

    private:
        InitialState();
        ~InitialState();

        static InitialState* instance;

        GlutProgram* mainProgram;

        /**************************/
        /* Place state items here */
        /**************************/

        ShaderProgram shaderProgram;
        VAO objVAO;
        VBO objVBO;

        Model model;

        glm::mat4 modelMatrix;
        glm::mat4 viewMatrix;
        glm::mat4 projectionMatrix;
        glm::mat4 mvpMatrix;

};
