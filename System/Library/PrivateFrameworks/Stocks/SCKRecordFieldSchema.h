//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCKRecordFieldSchema : NSObject
{
    _Bool _encrypted;	// 8 = 0x8
    _Bool _required;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    Class _valueClass;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000002626
@property(nonatomic, getter=isRequired) _Bool required; // @synthesize required=_required;
@property(retain, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isValidRecord:(id)arg1;	// IMP=0x0000000000002430
- (id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(_Bool)arg3 encrypted:(_Bool)arg4;	// IMP=0x0000000000002398

@end

