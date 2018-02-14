def trace(x):
    print x
    return x

exec (lambda uk, m, pk, i:
        uk(lambda u:
            (lambda j:
                (lambda hk:
                    hk(lambda h:
                        pk(lambda p:
                            (lambda c:
                                lambda k: k( p + c + h + c ))
                            (chr(u-0x3D))))
                )(
                    m(lambda x: u+x)(m(chr)(j))(i)
                )
            )(
                (lambda s: lambda k: k(chr(u)[1:].join(s)))
            )
        )
    )(
        (lambda _: _(ord(dir()[0][0]))),
        (lambda f: lambda k: lambda s: k(map(f, s))),
        (lambda k: k("print ")),
        [ -23, 6, 13, 13, 16, -51, -63, 24, 16, 19, 13, 5, -62 ],
    )(
        (lambda x: x)
    )
