//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase;

@interface WFCloudKitWebServiceRequest : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    CKDatabase *_database;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000196cf9
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)parseRecord:(id)arg1 intoItem:(id)arg2 allKeys:(_Bool)arg3;	// IMP=0x0000000000196795
- (id)extractRecordDictFromRecordIfNecessary:(id)arg1 recordType:(id)arg2;	// IMP=0x00000000001966b9
- (id)recordsFromQueryResponse:(id)arg1;	// IMP=0x0000000000196603
- (id)urlForType:(unsigned long long)arg1 parameters:(id)arg2;	// IMP=0x0000000000196188
- (id)cloudKitAPIToken;	// IMP=0x00000000001960fe
- (id)cloudKitEnvironment;	// IMP=0x0000000000195ff2
- (id)pathComponentsForType:(unsigned long long)arg1 parameters:(id)arg2;	// IMP=0x0000000000195e97
- (unsigned long long)webServiceForRequestType:(unsigned long long)arg1;	// IMP=0x0000000000195e89
- (id)databaseName;	// IMP=0x0000000000195e23
- (id)getJSONFromURL:(id)arg1 headers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000195c81
- (id)getJSONFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000195c6a
- (id)postJSON:(id)arg1 toURL:(id)arg2 cacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000195a6d
- (id)queryWithItemType:(Class)arg1 filter:(id)arg2;	// IMP=0x0000000000195909
- (id)fetchProxiedRecordWithIdentifier:(id)arg1 possibleItemTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019571a
- (id)fetchRecordsWithItemType:(Class)arg1 filter:(id)arg2 cacheKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000195398
- (id)initWithContainer:(id)arg1 database:(id)arg2;	// IMP=0x00000000001952f0

@end

