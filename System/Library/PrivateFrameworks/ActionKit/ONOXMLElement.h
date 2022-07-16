//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>
#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/ONOSearching-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, ONOXMLDocument;

@interface ONOXMLElement : NSObject <ONOSearching, NSCopying, NSCoding>
{
    ONOXMLDocument *_document;	// 8 = 0x8
    NSString *_rawXMLString;	// 16 = 0x10
    NSString *_tag;	// 24 = 0x18
    unsigned long long _lineNumber;	// 32 = 0x20
    NSString *_namespace;	// 40 = 0x28
    ONOXMLElement *_parent;	// 48 = 0x30
    ONOXMLElement *_previousSibling;	// 56 = 0x38
    ONOXMLElement *_nextSibling;	// 64 = 0x40
    NSDictionary *_attributes;	// 72 = 0x48
    NSString *_stringValue;	// 80 = 0x50
    NSNumber *_numberValue;	// 88 = 0x58
    NSDate *_dateValue;	// 96 = 0x60
    struct _xmlNode *_xmlNode;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002806e2
@property(nonatomic) struct _xmlNode *xmlNode; // @synthesize xmlNode=_xmlNode;
@property(copy, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
@property(copy, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) ONOXMLElement *nextSibling; // @synthesize nextSibling=_nextSibling;
@property(retain, nonatomic) ONOXMLElement *previousSibling; // @synthesize previousSibling=_previousSibling;
@property(retain, nonatomic) ONOXMLElement *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSString *namespace; // @synthesize namespace=_namespace;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *rawXMLString; // @synthesize rawXMLString=_rawXMLString;
@property(nonatomic) __weak ONOXMLDocument *document; // @synthesize document=_document;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000028044f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000280235
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028019e
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000280133
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000002800d4
- (struct _xmlXPathObject *)xmlXPathObjectPtrWithXPath:(id)arg1;	// IMP=0x000000000027fe51
- (id)firstChildWithCSS:(id)arg1;	// IMP=0x000000000027fd91
- (void)enumerateElementsWithCSS:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000027fd2e
- (void)enumerateElementsWithCSS:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000027fc75
- (id)CSS:(id)arg1;	// IMP=0x000000000027fc25
- (id)firstChildWithXPath:(id)arg1;	// IMP=0x000000000027fb65
- (void)enumerateElementsWithXPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000027f9d3
- (void)enumerateElementsWithXPath:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000027f937
- (id)functionResultByEvaluatingXPath:(id)arg1;	// IMP=0x000000000027f8e9
- (id)XPath:(id)arg1;	// IMP=0x000000000027f811
- (unsigned long long)hash;	// IMP=0x000000000027f7ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027f784
- (id)description;	// IMP=0x000000000027f6ec
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000027f68d
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000027f67b
@property(readonly, nonatomic, getter=isBlank) _Bool blank;
- (id)indexesOfChildrenPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000027f1b8
- (id)childrenAtIndexes:(id)arg1;	// IMP=0x000000000027f04d
- (id)childrenWithTag:(id)arg1 inNamespace:(id)arg2;	// IMP=0x000000000027ef59
- (id)childrenWithTag:(id)arg1;	// IMP=0x000000000027ef45
- (id)firstChildWithTag:(id)arg1 inNamespace:(id)arg2;	// IMP=0x000000000027ee1a
- (id)firstChildWithTag:(id)arg1;	// IMP=0x000000000027ee06
@property(retain, nonatomic) NSArray *children; // @dynamic children;
- (id)valueForAttribute:(id)arg1 inNamespace:(id)arg2;	// IMP=0x000000000027ec13
- (id)valueForAttribute:(id)arg1;	// IMP=0x000000000027eb65

@end

