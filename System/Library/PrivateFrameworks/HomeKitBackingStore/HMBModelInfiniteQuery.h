//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HMBModelInfiniteQuery
{
    NSString *_sequenceArgumentName;	// 104 = 0x68
}

+ (id)queryWithSQLPredicate:(id)arg1 sequenceArgumentName:(id)arg2 indexedProperties:(id)arg3 arguments:(id)arg4;	// IMP=0x000000000005cc23
- (void).cxx_destruct;	// IMP=0x000000000005c877
@property(readonly, copy) NSString *sequenceArgumentName; // @synthesize sequenceArgumentName=_sequenceArgumentName;
- (id)performQueryOn:(id)arg1 arguments:(id)arg2;	// IMP=0x000000000005c56f
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 sequenceArgumentName:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7;	// IMP=0x000000000005c4d1

@end

