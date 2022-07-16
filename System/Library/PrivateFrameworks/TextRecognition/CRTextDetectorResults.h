//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray;

@interface CRTextDetectorResults : NSObject
{
    NSDictionary *_inputOptions;	// 8 = 0x8
    NSDate *_startTime;	// 16 = 0x10
    NSDate *_endTime;	// 24 = 0x18
    NSArray *_textFeatures;	// 32 = 0x20
    NSArray *_pyramidPreIntraScaleNMSTextFeatures;	// 40 = 0x28
    NSArray *_pyramidPostIntraScaleNMSTextFeatures;	// 48 = 0x30
    NSArray *_pyramidPostInterScaleNMSTextFeatures;	// 56 = 0x38
    NSMutableArray *_pyramidScaleSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000241c4
@property(retain, nonatomic) NSMutableArray *pyramidScaleSize; // @synthesize pyramidScaleSize=_pyramidScaleSize;
@property(retain, nonatomic) NSArray *pyramidPostInterScaleNMSTextFeatures; // @synthesize pyramidPostInterScaleNMSTextFeatures=_pyramidPostInterScaleNMSTextFeatures;
@property(retain, nonatomic) NSArray *pyramidPostIntraScaleNMSTextFeatures; // @synthesize pyramidPostIntraScaleNMSTextFeatures=_pyramidPostIntraScaleNMSTextFeatures;
@property(retain, nonatomic) NSArray *pyramidPreIntraScaleNMSTextFeatures; // @synthesize pyramidPreIntraScaleNMSTextFeatures=_pyramidPreIntraScaleNMSTextFeatures;
@property(retain, nonatomic) NSArray *textFeatures; // @synthesize textFeatures=_textFeatures;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSDictionary *inputOptions; // @synthesize inputOptions=_inputOptions;

@end
