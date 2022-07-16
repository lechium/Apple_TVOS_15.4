//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject
{
    int _replyBlockIndex;	// 8 = 0x8
    int _returnAddressIndex;	// 12 = 0xc
    SEL _sel;	// 16 = 0x10
    NSMethodSignature *_sig;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000002fb2
@property(readonly, retain, nonatomic) NSMethodSignature *sig; // @synthesize sig=_sig;
@property(readonly, nonatomic) int returnAddressIndex; // @synthesize returnAddressIndex=_returnAddressIndex;
@property(readonly, nonatomic) int replyBlockIndex; // @synthesize replyBlockIndex=_replyBlockIndex;
@property(readonly, nonatomic) SEL sel; // @synthesize sel=_sel;
- (id)description;	// IMP=0x0000000000002f72
@property(readonly, copy, nonatomic) NSString *typeStr; // @dynamic typeStr;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;	// IMP=0x00000000000026a2

@end

