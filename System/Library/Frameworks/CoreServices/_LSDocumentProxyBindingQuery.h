//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSDocumentProxy, NSString;

__attribute__((visibility("hidden")))
@interface _LSDocumentProxyBindingQuery
{
    _Bool _yieldClaimBindings;	// 9 = 0x9
    unsigned char _style;	// 10 = 0xa
    LSDocumentProxy *_documentProxy;	// 16 = 0x10
    NSString *_handlerRank;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aff92
- (void).cxx_destruct;	// IMP=0x00000000000b0261
@property(readonly, copy, nonatomic) NSString *handlerRank; // @synthesize handlerRank=_handlerRank;
@property(readonly, nonatomic) unsigned char style; // @synthesize style=_style;
@property(readonly, retain, nonatomic) LSDocumentProxy *documentProxy; // @synthesize documentProxy=_documentProxy;
@property(nonatomic) _Bool yieldClaimBindings; // @synthesize yieldClaimBindings=_yieldClaimBindings;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b00b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aff9a
- (unsigned long long)hash;	// IMP=0x00000000000afe8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000afc9f
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x00000000000afc97
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000af485
- (id)initWithDocumentProxy:(id)arg1 style:(unsigned char)arg2 handlerRank:(id)arg3;	// IMP=0x00000000000af398

@end

