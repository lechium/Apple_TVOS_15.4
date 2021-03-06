//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>
#import <MapKit/_MXExtensionRequestDispatching-Protocol.h>
#import <MapKit/_MXExtensionStreamingRequestDispatching-Protocol.h>

@class NSString;

@interface _MXExtensionRequestDispatcher : NSObject <NSSecureCoding, _MXExtensionRequestDispatching, _MXExtensionStreamingRequestDispatching>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b091c
- (void)stopSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2;	// IMP=0x00000000000b0a0b
- (void)startSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2 toObserver:(id)arg3;	// IMP=0x00000000000b098e
- (void)dispatchRequest:(id)arg1 vendor:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b0924
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b0916
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b08e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

