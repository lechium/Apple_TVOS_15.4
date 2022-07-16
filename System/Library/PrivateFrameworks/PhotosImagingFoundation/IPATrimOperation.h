//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPATrimOperation
{
    CDStruct_1b6d18a9 _startTime;	// 8 = 0x8
    CDStruct_1b6d18a9 _endTime;	// 32 = 0x20
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
- (_Bool)isEqualToOperation:(id)arg1;	// IMP=0x0000000000025499
- (id)debugDescription;	// IMP=0x00000000000253aa
- (id)identifier;	// IMP=0x000000000002538b
- (id)settingsDictionary;	// IMP=0x0000000000025273
- (id)trimRangeDictionary;	// IMP=0x0000000000025166
@property(readonly, nonatomic) CDStruct_e83c9415 trimRange;
- (id)initWithSettingsDictionary:(id)arg1;	// IMP=0x0000000000024fa9
- (id)initWithOperation:(id)arg1;	// IMP=0x0000000000024f1d
- (id)initWithStartTime:(CDStruct_1b6d18a9)arg1 endTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000024db3
- (id)initWithTrimRange:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000024d44

@end

