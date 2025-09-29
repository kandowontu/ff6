.list off
.ifndef BUSHIDO_DESC_INC
BUSHIDO_DESC_INC = 1

.global BushidoDesc, BushidoDescPtrs

.scope BushidoDesc

        Start := BushidoDesc

; ##############################################################################
; ###          AUTOMATICALLY GENERATED CODE, DO NOT MODIFY MANUALLY          ###
; ##############################################################################

        ARRAY_LENGTH = 8

        _0 := BushidoDesc + $0000
        _1 := BushidoDesc + $000b
        _2 := BushidoDesc + $001d
        _3 := BushidoDesc + $0030
        _4 := BushidoDesc + $003b
        _5 := BushidoDesc + $0050
        _6 := BushidoDesc + $0061
        _7 := BushidoDesc + $006c

; ##############################################################################

.endscope

.endif
.list on