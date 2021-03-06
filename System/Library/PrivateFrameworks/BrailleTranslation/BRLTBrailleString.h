//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BrailleTranslation/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface BRLTBrailleString : NSObject <NSCopying>
{
    NSMutableArray *_brailleChars;	// 8 = 0x8
}

+ (id)unicodeToBestEffortBrf:(id)arg1;	// IMP=0x00000000000081a2
+ (_Bool)isValidBRF:(id)arg1;	// IMP=0x0000000000008024
+ (id)brfToUnicode:(id)arg1;	// IMP=0x0000000000007ecf
+ (id)brfTable;	// IMP=0x0000000000007ec2
+ (id)unicodeToDin:(id)arg1;	// IMP=0x0000000000007d00
+ (id)dinToUnicode:(id)arg1;	// IMP=0x0000000000007b8e
- (void).cxx_destruct;	// IMP=0x00000000000084aa
@property(readonly, nonatomic) unsigned long long length;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000842d
- (_Bool)isEqualToBrailleString:(id)arg1;	// IMP=0x00000000000083d6
- (id)description;	// IMP=0x00000000000083c4
- (id)bestEffortBrf;	// IMP=0x0000000000008361
@property(readonly, nonatomic) NSArray *brailleChars;
- (id)initWithBrf:(id)arg1;	// IMP=0x0000000000007ae6
@property(readonly, nonatomic) NSString *unicode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007908
- (id)initWithUnicode:(id)arg1;	// IMP=0x00000000000077f2
- (id)initWithBrailleChars:(id)arg1;	// IMP=0x000000000000775c
- (id)init;	// IMP=0x0000000000007748

@end

