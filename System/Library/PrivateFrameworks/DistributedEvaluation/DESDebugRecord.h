//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESUserDefaultsStoreRecord, NSDictionary, NSMutableDictionary, NSString;

@interface DESDebugRecord : NSObject
{
    NSMutableDictionary *_debugInfo;	// 8 = 0x8
    DESUserDefaultsStoreRecord *_storeRecord;	// 16 = 0x10
    NSString *_recordID;	// 24 = 0x18
}

+ (id)recordIDFromPluginID:(id)arg1 taskSource:(long long)arg2;	// IMP=0x0000000000023cc0
- (void).cxx_destruct;	// IMP=0x0000000000024615
@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
- (_Bool)commitWithError:(id *)arg1;	// IMP=0x00000000000245db
- (void)addForTaskID:(id)arg1 result:(long long)arg2 description:(id)arg3;	// IMP=0x0000000000024409
@property(readonly, nonatomic) NSDictionary *debugInfo;
- (id)stringForResult:(id)arg1;	// IMP=0x00000000000242aa
- (id)description;	// IMP=0x0000000000023f4e
- (id)initWithRecordID:(id)arg1 debugInfo:(id)arg2;	// IMP=0x0000000000023e46
- (id)initWithPluginID:(id)arg1 taskSource:(long long)arg2;	// IMP=0x0000000000023dbf
- (id)initFromStoreWithPluginID:(id)arg1 taskSource:(long long)arg2;	// IMP=0x0000000000023cf4

@end

