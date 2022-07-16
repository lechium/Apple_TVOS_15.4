//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPLocalContactStore, PPLocalEventStore, PPLocalLocationStore, PPLocalNamedEntityStore, PPLocalTopicStore;

@interface PPTemporalClusterStorage : NSObject
{
    PPLocalEventStore *_eventStore;	// 8 = 0x8
    PPLocalTopicStore *_topicStore;	// 16 = 0x10
    PPLocalNamedEntityStore *_entityStore;	// 24 = 0x18
    PPLocalLocationStore *_locationStore;	// 32 = 0x20
    PPLocalContactStore *_contactStore;	// 40 = 0x28
}

+ (id)enrichEntities:(id)arg1 mediaRecords:(id)arg2;	// IMP=0x0000000000166b1b
+ (id)defaultStorage;	// IMP=0x00000000001667ae
- (void).cxx_destruct;	// IMP=0x000000000016467d
- (id)eventsWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00000000001645b1
- (id)rankedTemporalClusterForStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000164274
- (id)initWithEventStore:(id)arg1 topicStore:(id)arg2 entityStore:(id)arg3 locationStore:(id)arg4 contactStore:(id)arg5;	// IMP=0x0000000000164172
- (id)init;	// IMP=0x000000000016416c

@end

