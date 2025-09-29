.list off
.ifndef BLITZ_DESC_INC
BLITZ_DESC_INC = 1

.global BlitzDesc, BlitzDescPtrs

.scope BlitzDesc

        Start := BlitzDesc

; ##############################################################################
; ###          AUTOMATICALLY GENERATED CODE, DO NOT MODIFY MANUALLY          ###
; ##############################################################################

        ARRAY_LENGTH = 8

        _0 := BlitzDesc + $0000
        _1 := BlitzDesc + $0013
        _2 := BlitzDesc + $0025
        _3 := BlitzDesc + $0035
        _4 := BlitzDesc + $0045
        _5 := BlitzDesc + $0055
        _6 := BlitzDesc + $0065
        _7 := BlitzDesc + $0077

; ##############################################################################

.endscope

.endif
.list on
