//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/IMDBridgedRecord-Protocol.h>

@class NSString;

@interface IMDAttachmentRecord <IMDBridgedRecord>
{
}

+ (id)keyPathsToColumns;	// IMP=0x000000000007f9dc
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f82f
- (id)init;	// IMP=0x000000000007f9ce
@property(readonly, nonatomic, getter=isCommSafetySensitive) _Bool commSafetySensitive;
@property(readonly, nonatomic) long long transferState;
@property(readonly, copy, nonatomic) NSString *utiString;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSString *guid;
@property(readonly, nonatomic) long long rowID;
- (int)_propertyIDForProperty:(long long)arg1;	// IMP=0x000000000007f8ec
- (CDStruct_7ef4fb35)_propertyDescriptorForProperty:(long long)arg1;	// IMP=0x000000000007f8bf
- (struct __CFArray *)_localCache;	// IMP=0x000000000007f8a8
- (void *)_fetchUpdatedRecord;	// IMP=0x000000000007f88e
- (struct _IMDAttachmentRecordStruct *)cfAttachmentRecord;	// IMP=0x000000000007f866
- (unsigned long long)_cfTypeID;	// IMP=0x000000000007f85c

@end

