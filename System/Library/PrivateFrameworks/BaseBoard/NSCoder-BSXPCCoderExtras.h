//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

#import <BaseBoard/BSXPCDecoding-Protocol.h>
#import <BaseBoard/BSXPCEncoding-Protocol.h>

@class NSString;

@interface NSCoder (BSXPCCoderExtras) <BSXPCEncoding, BSXPCDecoding>
- (unsigned long long)decodeUInt64ForKey:(id)arg1;	// IMP=0x000000000007be06
- (struct CGRect)decodeCGRectForKey:(id)arg1;	// IMP=0x000000000007bde7
- (struct CGSize)decodeCGSizeForKey:(id)arg1;	// IMP=0x000000000007bdd5
- (struct CGPoint)decodeCGPointForKey:(id)arg1;	// IMP=0x000000000007bdc3
- (id)decodeStringForKey:(id)arg1;	// IMP=0x000000000007bd90
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x000000000007bc9f
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x000000000007bc8d
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x000000000007bc7b
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x000000000007bc69
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x000000000007bc57
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007bbc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
