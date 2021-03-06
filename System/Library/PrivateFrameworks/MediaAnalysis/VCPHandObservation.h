//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VCPHandObservation : NSObject
{
    int _chirality;	// 8 = 0x8
    int _handID;	// 12 = 0xc
    int _revision;	// 16 = 0x10
    NSArray *_keypoints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007fbd2
@property(nonatomic) int revision; // @synthesize revision=_revision;
@property(nonatomic) int handID; // @synthesize handID=_handID;
@property(nonatomic) int chirality; // @synthesize chirality=_chirality;
@property(retain, nonatomic) NSArray *keypoints; // @synthesize keypoints=_keypoints;

@end

