//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSKeychainBackedKey;

__attribute__((visibility("hidden")))
@interface CKKSKeychainBackedKeySet : NSObject
{
    _Bool _newUpload;	// 8 = 0x8
    CKKSKeychainBackedKey *_tlk;	// 16 = 0x10
    CKKSKeychainBackedKey *_classA;	// 24 = 0x18
    CKKSKeychainBackedKey *_classC;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001af456
- (void).cxx_destruct;	// IMP=0x00200000001af423
@property _Bool newUpload; // @synthesize newUpload=_newUpload;
@property(retain) CKKSKeychainBackedKey *classC; // @synthesize classC=_classC;
@property(retain) CKKSKeychainBackedKey *classA; // @synthesize classA=_classA;
@property(retain) CKKSKeychainBackedKey *tlk; // @synthesize tlk=_tlk;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001af27f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001af177
- (id)description;	// IMP=0x00100000001af0a2
- (id)initWithTLK:(id)arg1 classA:(id)arg2 classC:(id)arg3 newUpload:(_Bool)arg4;	// IMP=0x00100000001aefe0

@end

