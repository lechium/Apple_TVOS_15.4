//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface PGFlexMusicCuration : NSObject
{
    MISSING_TYPE *curatorVersion;	// 8 = 0x8
    MISSING_TYPE *bestSongSuggestions;	// 16 = 0x10
    MISSING_TYPE *secondarySongSuggestions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010ff20
- (id)init;	// IMP=0x000000000010fec0
@property(nonatomic, readonly) NSString *description;
- (id)jsonRepresentation;	// IMP=0x000000000010f860
@property(nonatomic, readonly) NSArray *secondarySongSuggestions;
@property(nonatomic, readonly) NSArray *bestSongSuggestions;

@end

