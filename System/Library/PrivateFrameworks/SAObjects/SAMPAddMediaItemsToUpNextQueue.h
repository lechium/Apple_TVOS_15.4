//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue
{
}

+ (id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000031f51
+ (id)addMediaItemsToUpNextQueue;	// IMP=0x0000000000031f3f
- (_Bool)requiresResponse;	// IMP=0x0000000000032005
@property(copy, nonatomic) NSString *speakerSharedUserId;
@property(copy, nonatomic) NSString *musicAccountSharedUserId;
@property(retain, nonatomic) SAMPCollection *mediaCollection;
@property(copy, nonatomic) NSString *insertLocation;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;	// IMP=0x0000000000031f32
- (id)groupIdentifier;	// IMP=0x0000000000031f1e

@end
