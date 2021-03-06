//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSInvalidatable-Protocol.h>

@class NSString;

@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable>
{
    _Bool _valid;	// 8 = 0x8
    unsigned long long _propertyUpdateGeneration;	// 16 = 0x10
}

@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property unsigned long long propertyUpdateGeneration; // @synthesize propertyUpdateGeneration=_propertyUpdateGeneration;
- (void)invalidate;	// IMP=0x0000000000041d1f
- (id)init;	// IMP=0x0000000000041ce7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

