//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CoreDAVSyncReportTask
{
    _Bool _moreToSync;	// 56 = 0x38
    _Bool _wasInvalidSyncToken;	// 57 = 0x39
    NSString *_nextSyncToken;	// 64 = 0x40
    NSString *_previousSyncToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000005bfab
@property(readonly, nonatomic) NSString *previousSyncToken; // @synthesize previousSyncToken=_previousSyncToken;
@property(readonly, nonatomic) _Bool wasInvalidSyncToken; // @synthesize wasInvalidSyncToken=_wasInvalidSyncToken;
@property(readonly, nonatomic) _Bool moreToSync; // @synthesize moreToSync=_moreToSync;
@property(readonly, nonatomic) NSString *nextSyncToken; // @synthesize nextSyncToken=_nextSyncToken;
- (void)finishCoreDAVTaskWithError:(id)arg1;	// IMP=0x000000000005bb66
- (_Bool)hadUnexpectedChangeOfSyncTokenWithZeroResponses;	// IMP=0x000000000005babb
- (id)copyDefaultParserForContentType:(id)arg1;	// IMP=0x000000000005b9e7
- (id)notFoundHREFs;	// IMP=0x000000000005b5c4
- (id)requestBody;	// IMP=0x000000000005b21b
- (id)httpMethod;	// IMP=0x000000000005b20e
- (id)description;	// IMP=0x000000000005b163
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4;	// IMP=0x000000000005b056

@end

