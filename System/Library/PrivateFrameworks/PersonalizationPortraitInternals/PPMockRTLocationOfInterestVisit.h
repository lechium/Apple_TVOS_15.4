//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PPMockRTLocationOfInterestVisit : NSObject
{
    NSDate *_entryDate;	// 8 = 0x8
    NSDate *_exitDate;	// 16 = 0x10
}

+ (id)mockLocationOfInterestVisitWithEntryDate:(id)arg1 exitDate:(id)arg2;	// IMP=0x00000000000210c6
- (void).cxx_destruct;	// IMP=0x000000000002109e
@property(retain, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;

@end

