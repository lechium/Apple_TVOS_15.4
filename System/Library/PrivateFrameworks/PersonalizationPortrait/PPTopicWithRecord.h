//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PPTopicRecord;

@interface PPTopicWithRecord
{
    PPTopicRecord *_mostRelevantRecord;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000054f79
- (double)sentimentScore;	// IMP=0x0000000000054f52
- (id)mostRelevantRecord;	// IMP=0x0000000000054f3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054f32
- (id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2;	// IMP=0x0000000000054eb8

@end

