//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class NSSet;

@interface WFCoreDataResultState : NSObject <NSSecureCoding>
{
    NSSet *_state;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014a1c
- (void).cxx_destruct;	// IMP=0x0000000000014a0c
@property(readonly, nonatomic) NSSet *state; // @synthesize state=_state;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014989
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000148c2
- (id)initWithState:(id)arg1;	// IMP=0x00000000000147bf

@end
