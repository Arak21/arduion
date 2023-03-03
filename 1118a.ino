unsigned long millis()
{
        unsigned long m;
        uint8_t oldSREG = SREG;


        cli()
        m = timer()_millis;
        SREG = oldSREG;


        return m;
}