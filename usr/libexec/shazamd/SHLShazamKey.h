//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SHLShazamKey : NSObject
{
    NSString *_validatedKey;	// 8 = 0x8
}

+ (id)keyWithValue:(id)arg1;	// IMP=0x0020000000036f85
- (void).cxx_destruct;	// IMP=0x0020000000037213
@property(readonly, nonatomic) NSString *validatedKey; // @synthesize validatedKey=_validatedKey;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000037180
- (_Bool)isShazamKeyValid:(id)arg1;	// IMP=0x0010000000037073
- (id)initWithKey:(id)arg1;	// IMP=0x0010000000036fd2

@end

