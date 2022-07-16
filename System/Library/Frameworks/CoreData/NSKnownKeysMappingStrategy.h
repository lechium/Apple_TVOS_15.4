//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSFastEnumeration-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@interface NSKnownKeysMappingStrategy : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009e296
+ (id)alloc;	// IMP=0x000000000009e27b
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009e260
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009e2f4
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009e2ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009e2e6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009e2de
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) id *keys;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;	// IMP=0x000000000009e2be
- (unsigned long long)indexForKey:(id)arg1;	// IMP=0x000000000009e2ae
- (id)initForKeys:(id)arg1;	// IMP=0x000000000009e2a6
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000009e29e

@end

