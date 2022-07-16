//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VCPPersonObservation : NSObject
{
    float _relativeActionScore;	// 8 = 0x8
    float _absoluteActionScore;	// 12 = 0xc
    int _personID;	// 16 = 0x10
    int _revision;	// 20 = 0x14
    NSArray *_keypoints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007fb71
@property(nonatomic) int revision; // @synthesize revision=_revision;
@property(nonatomic) int personID; // @synthesize personID=_personID;
@property(nonatomic) float absoluteActionScore; // @synthesize absoluteActionScore=_absoluteActionScore;
@property(nonatomic) float relativeActionScore; // @synthesize relativeActionScore=_relativeActionScore;
@property(retain, nonatomic) NSArray *keypoints; // @synthesize keypoints=_keypoints;

@end

