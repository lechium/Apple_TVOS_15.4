//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/IMDBridgedRecord-Protocol.h>

@class NSDictionary, NSString;

@interface IMDChatRecord <IMDBridgedRecord>
{
}

+ (id)keyPathsToColumns;	// IMP=0x00000000000211a5
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021002
- (id)init;	// IMP=0x0000000000021197
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, copy, nonatomic) NSString *serviceName;
@property(readonly, copy, nonatomic) NSDictionary *properties;
@property(readonly, copy, nonatomic) NSString *guid;
@property(readonly, nonatomic) long long rowID;
- (int)_propertyIDForProperty:(long long)arg1;	// IMP=0x00000000000210bf
- (CDStruct_7ef4fb35)_propertyDescriptorForProperty:(long long)arg1;	// IMP=0x0000000000021092
- (struct __CFArray *)_localCache;	// IMP=0x000000000002107b
- (void *)_fetchUpdatedRecord;	// IMP=0x0000000000021061
- (struct _IMDChatRecordStruct *)cfChatRecord;	// IMP=0x0000000000021039
- (unsigned long long)_cfTypeID;	// IMP=0x000000000002102f

@end
