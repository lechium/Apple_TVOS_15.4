//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PXContextualMemoriesOptions : NSObject
{
    double _accuracy;	// 8 = 0x8
    NSDate *_peopleProximityDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002ccd03
@property(retain, nonatomic) NSDate *peopleProximityDate; // @synthesize peopleProximityDate=_peopleProximityDate;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
- (id)init;	// IMP=0x00000000002ccc01

@end
