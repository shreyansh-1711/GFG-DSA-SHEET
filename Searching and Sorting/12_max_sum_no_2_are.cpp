int prev1 = arr[0];
int prev2 = 0;
int pick, npick, curr = 0;
for (int i = 1; i < n; i++)
{
    pick = arr[i];
    if (i > 1)
    {
        pick = pick + prev2;
    }
    npick = 0 + prev1;
    curr = max(pick, npick);
    prev2 = prev1;
    prev1 = curr;
}

return prev1;