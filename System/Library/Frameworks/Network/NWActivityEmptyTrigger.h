//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBCodable;

@interface NWActivityEmptyTrigger : NSObject
{
    unsigned int _awdMetricID;	// 8 = 0x8
    PBCodable *_awdReport;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007cb70
@property(nonatomic) unsigned int awdMetricID; // @synthesize awdMetricID=_awdMetricID;
@property(retain, nonatomic) PBCodable *awdReport; // @synthesize awdReport=_awdReport;
- (id)initWithPBCodableData:(id)arg1;	// IMP=0x000000000007c8d0

@end

