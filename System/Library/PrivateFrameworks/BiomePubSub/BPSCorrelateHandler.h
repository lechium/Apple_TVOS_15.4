//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BPSCorrelateHandler : NSObject
{
    id _context;	// 8 = 0x8
}

+ (id)directStreamsAssociationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000042f7
- (void).cxx_destruct;	// IMP=0x0000000000003f4c
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)updateContext:(id)arg1;	// IMP=0x0000000000003f20
- (id)correlateWithCurrentEvent:(id)arg1;	// IMP=0x0000000000003e93
- (void)receiveCurrentEvent:(id)arg1;	// IMP=0x0000000000003e07
- (void)receivePriorEvent:(id)arg1;	// IMP=0x0000000000003d7b
- (id)initWithInitialContext:(id)arg1;	// IMP=0x0000000000003d10
- (id)initWithInitalContext:(id)arg1;	// IMP=0x0000000000003cfe
- (id)init;	// IMP=0x0000000000003cf8

@end

