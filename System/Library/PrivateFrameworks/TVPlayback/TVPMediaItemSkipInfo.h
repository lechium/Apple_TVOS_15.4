//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPMediaItemSkipInfo : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    double _start;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    double _target;	// 32 = 0x20
    NSString *_localizedTitle;	// 40 = 0x28
    NSString *_skipIntroReportingType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001b717
@property(readonly, copy, nonatomic) NSString *skipIntroReportingType; // @synthesize skipIntroReportingType=_skipIntroReportingType;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) double target; // @synthesize target=_target;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_typeDescription;	// IMP=0x000000000001b6a5
- (id)description;	// IMP=0x000000000001b628
- (id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 localizedTitle:(id)arg5 skipIntroReportingType:(id)arg6;	// IMP=0x000000000001b53b

@end

