//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVContainerMultiGetTask.h>

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask
{
    _Bool _getScheduleTags;	// 128 = 0x80
    _Bool _getScheduleChanges;	// 129 = 0x81
}

@property(nonatomic) _Bool getScheduleChanges; // @synthesize getScheduleChanges=_getScheduleChanges;
@property(nonatomic) _Bool getScheduleTags; // @synthesize getScheduleTags=_getScheduleTags;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;	// IMP=0x000000000000b25c
- (id)copyAdditionalPropElements;	// IMP=0x000000000000b12d
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(_Bool)arg3 getScheduleChanges:(_Bool)arg4;	// IMP=0x000000000000b09c
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(_Bool)arg3 getScheduleChanges:(_Bool)arg4 appSpecificCalendarItemClass:(Class)arg5;	// IMP=0x000000000000af65

@end

