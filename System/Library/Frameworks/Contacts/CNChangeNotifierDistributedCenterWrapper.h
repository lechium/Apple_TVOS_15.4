//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNChangeNotifierWrapper-Protocol.h>

@class NSString;

@interface CNChangeNotifierDistributedCenterWrapper : NSObject <CNChangeNotifierWrapper>
{
}

- (void)postNotification:(id)arg1;	// IMP=0x00000000000991f3
- (void)removeObserver:(id)arg1 notification:(id)arg2;	// IMP=0x000000000009919b
- (void)addObserver:(id)arg1 notification:(id)arg2;	// IMP=0x0000000000099133

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

