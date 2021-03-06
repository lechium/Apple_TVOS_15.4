//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEUpdaterStatus : NSObject
{
    _Bool _upToDate;	// 8 = 0x8
    _Bool _disabled;	// 9 = 0x9
    _Bool _loggedEvent;	// 10 = 0xa
    NSString *_publicationId;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f0e0f
@property(nonatomic) _Bool loggedEvent; // @synthesize loggedEvent=_loggedEvent;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool upToDate; // @synthesize upToDate=_upToDate;
@property(retain, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
- (void)logCoreAnalyticsEvent;	// IMP=0x00000000001f0caa
- (id)initWithPublicationId:(id)arg1 upToDate:(_Bool)arg2 version:(id)arg3;	// IMP=0x00000000001f0ad8

@end

