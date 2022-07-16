//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPersistentHistoryMarkerOverrides-Protocol.h>

@class NSString;

@interface PLPersistentHistoryMarker : NSObject <PLPersistentHistoryMarkerOverrides>
{
}

+ (id)markerWithTransaction:(id)arg1;	// IMP=0x00000000004d817f
+ (id)markerWithDate:(id)arg1;	// IMP=0x00000000004d8132
+ (id)markerWithToken:(id)arg1;	// IMP=0x00000000004d80e5
@property(readonly, copy) NSString *shortDescription;
- (id)changeRequestForFetching;	// IMP=0x00000000004d80c1
- (id)overrride_shortDescription;	// IMP=0x00000000004d8444
- (id)overrride_changeRequestForFetching;	// IMP=0x00000000004d8412

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

