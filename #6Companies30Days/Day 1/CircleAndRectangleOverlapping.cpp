class Solution
{
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2)
    {
        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                float dis = sqrt(pow(i * 1.0 - xCenter, 2) + pow(j * 1.0 - yCenter, 2));

                if (dis <= radius)
                {
                    return true;
                }
            }
        }

        return false;
    }
};