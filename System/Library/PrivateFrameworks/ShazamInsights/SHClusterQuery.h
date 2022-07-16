//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SHClusterQuery : NSObject
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

+ (id)tracksCluster;	// IMP=0x0000000000007355
+ (id)artistsCluster;	// IMP=0x00000000000072e6
+ (id)clusterForType:(long long)arg1;	// IMP=0x00000000000072ac
- (void).cxx_destruct;	// IMP=0x0000000000007d36
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void)statusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007a04
- (void)mediaItemsMatchingValuesInCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000078b0
- (void)mediaItemsWithHighCohesionToValue:(id)arg1 forProperty:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000777c
- (void)filterMediaItemQueryCollection:(id)arg1 bySeedCollection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007648
- (void)controllerForType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000074b0
- (id)initWithType:(long long)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3;	// IMP=0x00000000000073c4

@end
