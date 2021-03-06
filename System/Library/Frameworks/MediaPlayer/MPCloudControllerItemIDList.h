//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject
{
    ICCloudItemIDList *_cloudItemIDList;	// 8 = 0x8
}

+ (id)cloudItemIDListForPlaylist:(id)arg1;	// IMP=0x00000000001e9788
- (void).cxx_destruct;	// IMP=0x00000000001e9778
@property(retain, nonatomic) ICCloudItemIDList *cloudItemIDList; // @synthesize cloudItemIDList=_cloudItemIDList;
- (id)ICCloudItemIDList;	// IMP=0x00000000001e974f
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001e9739
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;	// IMP=0x00000000001e9723
- (id)init;	// IMP=0x00000000001e96cd

@end

