//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _EARNgramLmModel2
{
    shared_ptr_33ae5576 _ngramModel;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000004a23c1
- (id).cxx_construct;	// IMP=0x00000000004a2920
- (void).cxx_destruct;	// IMP=0x00000000004a290f
@property(readonly, nonatomic) shared_ptr_33ae5576 ngramModel; // @synthesize ngramModel=_ngramModel;
@property(readonly, nonatomic) NSString *arpaFileName;
- (void)setProtectionClass:(id)arg1;	// IMP=0x00000000004a2612
- (_Bool)writeToDirectory:(id)arg1;	// IMP=0x00000000004a247a
- (id)_initWithModel:(shared_ptr_33ae5576)arg1;	// IMP=0x00000000004a23e9

@end

