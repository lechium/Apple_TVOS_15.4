//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@protocol DNDSBackingStoreDelegate, DNDSBackingStoreRecord;

@protocol DNDSBackingStore <NSObject>
@property(nonatomic) __weak id <DNDSBackingStoreDelegate> delegate;
- (unsigned long long)writeRecord:(id <DNDSBackingStoreRecord>)arg1 writePartition:(_Bool)arg2 error:(id *)arg3;
- (unsigned long long)writeRecord:(id <DNDSBackingStoreRecord>)arg1 error:(id *)arg2;
- (id)readRecordWithError:(id *)arg1;
@end

