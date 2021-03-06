//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MediaConversionQueue, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface VideoConversionService : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    MediaConversionQueue *_requestQueue;	// 16 = 0x10
}

+ (void)_forceCrashAfterVideoConversionHangDetectedWithMarker;	// IMP=0x002000000001f70c
+ (id)resourceURLCollectionForDestinationBookmarkDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001f5ef
+ (void)run;	// IMP=0x001000000001f5c2
- (void).cxx_destruct;	// IMP=0x002000000001ef7e
@property(retain) MediaConversionQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (CDUnknownBlockType)connectionTerminationEventHandlerForConnectionIdentifier:(id)arg1 eventDescription:(id)arg2;	// IMP=0x001000000001ee4d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000001ea9c
- (void)requestStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e9bd
- (void)cancelJobsForConnectionWithIdentifier:(id)arg1;	// IMP=0x001000000001e96d
- (void)cancelJobWithIdentifier:(id)arg1;	// IMP=0x001000000001e957
- (void)modifyJobWithIdentifier:(id)arg1 modifications:(id)arg2;	// IMP=0x001000000001e807
- (void)extractStillImageFromVideoAtSourceBookmarkDictionary:(id)arg1 toDestinationBookmarkDictionary:(id)arg2 options:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e75b
- (void)singlePassConvertVideoAtSourceBookmarkDictionary:(id)arg1 toDestinationBookmarkDictionary:(id)arg2 options:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e6af
- (void)generateGIFForVideoAtSourceBookmarkDictionary:(id)arg1 toDestinationBookmarkDictionary:(id)arg2 options:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e603
- (void)convertVideoAtSourceBookmarkDictionary:(id)arg1 toDestinationBookmarkDictionary:(id)arg2 options:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e469
- (void)echo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e404
- (void)conversionQueue:(id)arg1 cancelCurrentlyProcessingEntry:(id)arg2;	// IMP=0x001000000001e2ae
- (void)conversionQueue:(id)arg1 processNextEntry:(id)arg2;	// IMP=0x001000000001da01
- (_Bool)optionsRequirePhotosAdjustmentProcessing:(id)arg1;	// IMP=0x001000000001d973
- (void)performConversionOfClass:(Class)arg1 forSourceBookmarkDictionary:(id)arg2 destinationBookmarkDictionary:(id)arg3 options:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001cc7d
- (void)run;	// IMP=0x001000000001cbc8
- (id)init;	// IMP=0x001000000001cb5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

