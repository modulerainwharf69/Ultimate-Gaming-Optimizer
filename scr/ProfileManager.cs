namespace UltimateGamingOptimizer
{
    public enum ProfileType
    {
        Safe,
        Balanced,
        Performance,
        Extreme
    }

    public class ProfileManager
    {
        public ProfileType CurrentProfile { get; set; }

        public void Apply()
        {
        }
    }
}
