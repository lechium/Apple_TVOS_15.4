//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCReportingEvent-Protocol.h>

@class ICPlayActivityEvent, NSString;

__attribute__((visibility("hidden")))
@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent>
{
    _Bool _shouldReportToStore;	// 8 = 0x8
    ICPlayActivityEvent *_playActivityEvent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018812d
@property(nonatomic) _Bool shouldReportToStore; // @synthesize shouldReportToStore=_shouldReportToStore;
@property(copy, nonatomic) ICPlayActivityEvent *playActivityEvent; // @synthesize playActivityEvent=_playActivityEvent;
- (unsigned long long)reportingEventType;	// IMP=0x00000000001880f7
- (_Bool)isValidReportingEvent;	// IMP=0x00000000001880e9
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

