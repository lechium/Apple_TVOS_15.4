//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSArray, NSDictionary, NSString;

@interface CalDAVCalendarSearchTask : CoreDAVTask
{
    NSArray *_languages;	// 40 = 0x28
    NSString *_location;	// 48 = 0x30
    NSString *_calendarType;	// 56 = 0x38
    NSDictionary *_urlsToResults;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000048e1a
@property(readonly, retain, nonatomic) NSDictionary *urlsToResults; // @synthesize urlsToResults=_urlsToResults;
- (void)finishCoreDAVTaskWithError:(id)arg1;	// IMP=0x00000000000489ad
- (id)copyDefaultParserForContentType:(id)arg1;	// IMP=0x0000000000048910
- (id)requestBody;	// IMP=0x0000000000048558
- (id)httpMethod;	// IMP=0x000000000004854b
- (id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4;	// IMP=0x0000000000048451

@end

