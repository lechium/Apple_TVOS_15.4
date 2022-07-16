//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AddressBook/ABSRecord-Protocol.h>

@class ABSAddressBook, CNAccount, CNMutableContainer, NSString;

@interface ABSSource : NSObject <ABSRecord>
{
    int _revertedRecordID;	// 8 = 0x8
    ABSAddressBook *_addressBook;	// 16 = 0x10
    ABSSource *_source;	// 24 = 0x18
    CNAccount *_account;	// 32 = 0x20
    CNMutableContainer *_cnImpl;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x000000000000719f
- (void).cxx_destruct;	// IMP=0x0000000000007a0c
@property(nonatomic) int revertedRecordID; // @synthesize revertedRecordID=_revertedRecordID;
@property(retain, nonatomic) CNMutableContainer *cnImpl; // @synthesize cnImpl=_cnImpl;
@property(readonly, nonatomic) CNAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak ABSSource *source; // @synthesize source=_source;
@property(nonatomic) __weak ABSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void)replaceRecordStorageWithCNObject:(id)arg1;	// IMP=0x00000000000078c9
- (void)updateAllValuesWithValuesFromContainer:(id)arg1;	// IMP=0x000000000000775d
- (_Bool)removeProperty:(int)arg1 withError:(id *)arg2;	// IMP=0x00000000000076b7
- (_Bool)setValue:(void *)arg1 forProperty:(int)arg2 withError:(struct __CFError **)arg3;	// IMP=0x00000000000075f2
- (const void *)copyValueForProperty:(int)arg1;	// IMP=0x000000000000749d
- (id)getAccount;	// IMP=0x00000000000073fc
@property(readonly, nonatomic) NSString *compositeName;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) NSString *CNIdentifierString;
@property(readonly, nonatomic) int id;
- (id)initWithMutableContainer:(id)arg1;	// IMP=0x00000000000071ec
- (unsigned long long)_cfTypeID;	// IMP=0x00000000000071e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
