//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNTimeProvider-Protocol.h>

@class NSString;

@interface CNTimeProvider : NSObject <CNTimeProvider>
{
}

+ (id)defaultProvider;	// IMP=0x000000000000ce34
@property(readonly) double timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

