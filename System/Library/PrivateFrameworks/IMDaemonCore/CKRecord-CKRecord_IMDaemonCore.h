//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (CKRecord_IMDaemonCore)
- (id)copyEncodedSystemFields;	// IMP=0x00000000000780fd
- (id)_assetForKey:(id)arg1;	// IMP=0x00000000000cae74
- (id)_arrayForKey:(id)arg1;	// IMP=0x00000000000cae34
- (id)_dataForKey:(id)arg1;	// IMP=0x00000000000cadf4
- (id)_numberForKey:(id)arg1;	// IMP=0x00000000000cadb4
- (id)_stringForKey:(id)arg1;	// IMP=0x00000000000cada2
- (id)_valueForKey:(id)arg1;	// IMP=0x00000000000cad40
- (id)_dateForKey:(id)arg1;	// IMP=0x00000000000cad00
- (void)_setCKRecordDate:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cac8b
- (void)_setCKRecordAsset:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cac72
- (void)_setCKRecordArray:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cac32
- (void)_setCKRecordData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cabf2
- (void)_setUnencryptedCKRecordNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000caba4
- (void)_setCKRecordNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cab84
- (void)_setCKRecordString:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cab64
- (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000cab24
@end
